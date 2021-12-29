#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): FragTrap(), ScavTrap(), _name("DiamondTrap")
{
	this->_hitpoints = FragTrap::_hitpoints;
	this->_enerpoints = ScavTrap::_enerpoints;
	this->_attackdam = FragTrap::_attackdam;
	ClapTrap::_name = "DiamondTrap_clap_trap";
	std::cout << "Default constructor called (DiamondTrap)" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name), _name(name)
{
	this->_hitpoints = FragTrap::_hitpoints;
	this->_enerpoints = ScavTrap::_enerpoints;
	this->_attackdam = FragTrap::_attackdam;
	ClapTrap::_name = name + "_clap_trap";
	std::cout << "Constructor called (DiamondTrap)" << name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor called (DiamondTrap)" << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &copy) : FragTrap(copy), ScavTrap(copy), _name(copy._name)
{
	std::cout << "Copy constructor called (DiamondTrap)" << std::endl;
	(*this) = copy;
}

DiamondTrap & DiamondTrap::operator= (DiamondTrap &other)
{
	this->_name = other.getName();
	this->_hitpoints = other.getPoints();
	this->_enerpoints = other.getEnergy();
	this->_attackdam = other.getDamage();
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "my name is " << _name << " | clapTrap name is "<< ClapTrap::_name << std::endl;
}

//void DiamondTrap::attack(std::string const &target)
//{
//	ScavTrap::attack(target);
//}

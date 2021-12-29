#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_name = "ScavTrap";
	_hitpoints = 100;
	_enerpoints = 50;
	_attackdam = 20;
	std::cout << "Default constructor called(ScavTrap): " << _name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called(ScavTrap): " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	std::cout << "Copy constructor called(ScavTrap)" << std::endl;
	(*this) = obj;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	_attackdam = 20;
	_enerpoints = 50;
	_hitpoints = 100;
	std::cout << "Constructor called(ScavTrap): " << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	this->_name = other.getName();
	this->_hitpoints = other.getPoints();
	this->_enerpoints = other.getEnergy();
	this->_attackdam = other.getDamage();
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attackdam <<
	" points of damage!" << std::endl;
}
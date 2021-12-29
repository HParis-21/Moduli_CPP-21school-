#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called: " << _name << std::endl;
}

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitpoints(10), _enerpoints(10)
{
	_attackdam = 0;
	std::cout << "Default constructor called: " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hitpoints(10), _enerpoints(10), _attackdam(0)
{
	this->_name = name;
	std::cout << "Constructor called: " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	(*this) = obj;
}

void ClapTrap::setName(std::string name) { _name = name;}

void ClapTrap::setPoint(int point) { _hitpoints = point;}

void ClapTrap::setEnergy(int energy) {_enerpoints = energy;}

void ClapTrap::setDamage(int damage) {_attackdam = damage;}

std::string ClapTrap::getName() const { return (this->_name);}

int ClapTrap::getPoints() const {return (this->_hitpoints);}

int ClapTrap::getEnergy() const {return (this->_enerpoints);}

int ClapTrap::getDamage() const {return (this->_attackdam);}

ClapTrap &ClapTrap::operator= (const ClapTrap &other)
{
	this->_name = other.getName();
	this->_hitpoints = other.getPoints();
	this->_enerpoints = other.getEnergy();
	this->_attackdam = other.getDamage();
	return (*this);
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attackdam << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " take " << amount << " points of damage" << std::endl;
	_hitpoints -= amount;
	if (_hitpoints < 0)
	{
		_hitpoints = 0;
		std::cout << "ClapTrap dead" << std::endl;
	}
	std::cout << "ClapTrap " << _name << " " << _hitpoints << " hitpoints has been left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " was repaired, " << amount << "points was used" << std::endl;
	_hitpoints += amount;
	std::cout << "ClapTrap " << _name << " " << _hitpoints << " hp has been left" << std::endl;
}
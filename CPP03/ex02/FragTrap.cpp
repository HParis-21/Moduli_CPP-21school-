#include "FragTrap.hpp"

FragTrap::FragTrap() : ScavTrap()
{
	_name = "FragTrap";
	_hitpoints = 100;
	_enerpoints = 100;
	_attackdam = 30;
	std::cout << "Default constructor called(FragTrap): " << _name << std::endl;
}

FragTrap::FragTrap(std::string name) : ScavTrap(name)
{
	_name = name;
	_hitpoints = 100;
	_enerpoints = 100;
	_attackdam = 30;
	std::cout << "Constructor called(FragTrap): " << _name << std::endl;
};

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "Copy constructor called(FragTrap)" << std::endl;
	(*this) = obj;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called(FragTrap): " << _name << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	this->_name = other.getName();
	this->_hitpoints = other.getPoints();
	this->_enerpoints = other.getEnergy();
	this->_attackdam = other.getDamage();
	return (*this);
}

void    FragTrap::highFivesGuys(void)
{
	std::cout << _name << " : Give me five, bro!" << std::endl;
}

void FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << this->_name << " attack " << target << ", causing " << this->_attackdam <<
	" points of damage!" << std::endl;
}

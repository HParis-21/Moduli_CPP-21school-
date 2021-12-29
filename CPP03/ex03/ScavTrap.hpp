#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &obj);

	ScavTrap & operator=(const ScavTrap &other);

	void	guardGate();
	void	attack(std::string const &target);
};

#endif //SCAVTRAP_HPP

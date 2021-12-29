#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap :  public ScavTrap
{
private:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &obj);
	~FragTrap();

	FragTrap &operator=(FragTrap const &other);

	void highFivesGuys(void);
	void attack(std::string const &target);
};

#endif //FRAGTRAP_HPP

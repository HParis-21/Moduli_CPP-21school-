#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	int 		_hitpoints;
	int 		_enerpoints;
	int 		_attackdam;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &obj);
	~ClapTrap();

	void 	setName(std::string name);
	void 	setPoint(int point);
	void 	setEnergy(int energy);
	void 	setDamage(int damage);

	std::string getName() const;
	int 		getPoints() const;
	int 		getEnergy() const;
	int 		getDamage() const;

	ClapTrap &operator= (const ClapTrap &other);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif //CLAPTRAP_HPP

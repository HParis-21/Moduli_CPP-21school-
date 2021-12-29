#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*Weap;

public:
	HumanB(std::string name);
	~HumanB();

	void setName(std::string name);
	std::string getName();

	void setWeapon(Weapon &Weap);
	void attack();
};

#endif //HUMANB_HPP

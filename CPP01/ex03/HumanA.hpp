#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon		&Weap;
public:
	HumanA(std::string name, Weapon &Weap);
	~HumanA();

	void setName(std::string name);
	std::string getName();

	void attack();
};

#endif //HUMANA_HPP

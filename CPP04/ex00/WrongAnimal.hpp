#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string	_type;

public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &obj);

	WrongAnimal & operator= (const WrongAnimal &other);
	std::string getType() const;
	std::string makeSound() const;
};

std::ostream& operator<< (std::ostream &out, const WrongAnimal &animal);

#endif //WRONGANIMAL_HPP

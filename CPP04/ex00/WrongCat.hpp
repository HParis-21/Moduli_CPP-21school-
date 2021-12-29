#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &obj);

	WrongCat & operator= (const WrongCat &other);
	std::string makeSound() const;
};

#endif //WRONGCAT_HPP

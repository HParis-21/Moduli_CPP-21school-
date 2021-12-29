#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Bacterium") {
	std::cout << "Default constructor called (WrongAnimal)" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor called (WrongAnimal)" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "Constructor called (WrongAnimal)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) : _type(obj._type){
	std::cout << "Copy constructor called (WrongAnimal)" << std::endl;
}

WrongAnimal & WrongAnimal::operator= (const WrongAnimal &other) {
	if (this == &other)
		return (*this);
	this->_type = other._type;
	return (*this);
}

std::string WrongAnimal::getType() const { return (this->_type); }

std::string WrongAnimal::makeSound() const {
	return "AWOOOOO";
}

std::ostream& operator<< (std::ostream &out, const WrongAnimal &animal)
{
	out << animal.getType();
	return (out);
}
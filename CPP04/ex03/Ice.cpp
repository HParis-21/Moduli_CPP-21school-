#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Constructor called (Ice)" << std::endl;
}

Ice::~Ice() {
	std::cout << "Destructor called (Ice)" << std::endl;
}

Ice::Ice(const Ice & obj) : AMateria(obj._type) {
	(*this) = obj;
}

Ice & Ice::operator= (const Ice & other) {
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

AMateria* Ice::clone() const {
	AMateria *clone = new Ice();
	return (clone);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
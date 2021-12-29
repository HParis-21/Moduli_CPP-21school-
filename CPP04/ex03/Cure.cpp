#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Constructor called (Cure)" << std::endl;
}

Cure::~Cure() {
	std::cout << "Destructor called (Cure)" << std::endl;
}

Cure::Cure(const Cure & obj) : AMateria(obj._type) { (*this) = obj;
}

Cure & Cure::operator= (const Cure & other) {
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

AMateria* Cure::clone() const {
	AMateria *clone = new Cure();
	return (clone);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}


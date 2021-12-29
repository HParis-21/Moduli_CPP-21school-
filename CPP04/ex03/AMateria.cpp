#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {
	std::cout << "Constructor called (AMateria)" << std::endl;
}

AMateria::AMateria(const AMateria & obj) {
    std::cout << "Copy constructor called (AMateria)" << std::endl;
    *this = obj; }

AMateria::~AMateria() {
	std::cout << "Destructor called (AMateria)" << std::endl;
}

AMateria & AMateria::operator= (const AMateria & other) {
	this->_type = other._type;
	return (*this);
}

std::string const & AMateria::getType() const {	return (this->_type); }

void AMateria::use(ICharacter& target) {
	std::cout << target.getName() << std::endl;
}
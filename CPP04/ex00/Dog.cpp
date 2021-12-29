#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Default constructor called (Dog)" << std::endl;
}

Dog::Dog(const Dog &obj) {
	std::cout << "Copy constructor called (Dog)" << std::endl;
	*this = obj;
}

Dog::~Dog() {
	std::cout << "Destructor called (Dog)" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Assignation operator called (Dog)" << std::endl;
	this->_type = other.getType();
	return (*this);
}

std::string Dog::makeSound() const {
	return "Gav-Gav";
}
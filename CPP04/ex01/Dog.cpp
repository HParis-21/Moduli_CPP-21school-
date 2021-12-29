#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Default constructor called (Dog)" << std::endl;
	this->_type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &obj) {
	this->_type = obj._type;
	this->brain = new Brain(*obj.brain);
	std::cout << "Copy constructor called (Dog)" << std::endl;
}

Dog::~Dog() {
	std::cout << "Destructor called (Dog)" << std::endl;
	delete this->brain;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Assignation operator called (Dog)" << std::endl;
	if (this == &other)
		return (*this);
	this->_type = other.getType();
	return (*this);
}

std::string Dog::makeSound() const {
	return "Gav-Gav";
}

Brain *Dog::getBrain() const {return brain;}
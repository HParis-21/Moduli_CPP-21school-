#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Default constructor called (Cat)" << std::endl;
	this->_type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &obj) {
	this->_type = obj._type;
	this->brain = new Brain(*obj.brain);
	std::cout << "Copy constructor called (Cat)" << std::endl;
}

Cat::~Cat() {
	std::cout << "Destructor called (Cat)" << std::endl;
	delete this->brain;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Assignation operator called (Dog)" << std::endl;
	if (this == &other)
		return (*this);
	this->_type = other.getType();
	return (*this);
}

std::string Cat::makeSound() const {
	return "Meoooow";
}

Brain *Cat::getBrain() const {return brain;}
#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "Default constructor called (Cat)" << std::endl;
}

Cat::Cat(const Cat &obj) {
	std::cout << "Copy constructor called (Cat)" << std::endl;
	*this = obj;
}

Cat::~Cat() {
	std::cout << "Destructor called (Cat)" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Assignation operator called (Cat)" << std::endl;
	this->_type = other.getType();
	return (*this);
}

std::string Cat::makeSound() const {
	return "Meoooow";
}
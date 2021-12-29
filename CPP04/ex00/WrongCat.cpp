#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat") {
	std::cout << "Default constructor called (WrongCat)" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Destructor called (WrongCat)" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj){
	std::cout << "Copy constructor called (WrongCat)" << std::endl;
}

std::string WrongCat::makeSound(void) const {
	return "MEOOOW";
}
#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Default constructor called (Brain)" << std::endl;
}

Brain::~Brain() {
	std::cout << "Destructor called (Brain)" << std::endl;
}

Brain::Brain(const Brain &obj) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = obj.ideas[i];
}

Brain & Brain::operator= (const Brain &other) {
	if (this == &other)
		return (*this);
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	return (*this);
}

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
//	Animal *animal = new Animal();
//	animal->makeSound();

	Cat *cat = new Cat();
	std::cout << cat->makeSound() << std::endl;
	Dog* dog = new Dog();
	std::cout << dog->makeSound() << std::endl;
	std::cout << "******************************" << std::endl;
	Animal* dog2 = new Dog();
	Animal* cat2 = new Cat();
	std::cout << dog2->getType() << std::endl;
	std::cout << cat2->getType()  << std::endl;
	std::cout << "******************************" << std::endl;
	delete cat;
	delete cat2;
	delete dog;
	delete dog2;
	return (0);
}

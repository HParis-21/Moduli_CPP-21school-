#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << meta->getType() << std::endl;
	std::cout << meta->makeSound() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << dog->makeSound() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << cat->makeSound() << std::endl;
	delete meta;
	delete dog;
	delete cat;
	std::cout << "******************************" << std::endl;
	const WrongAnimal *w_meta = new WrongAnimal();
	const WrongAnimal *w_cat = new WrongCat();
	const WrongCat *cat_cat = new WrongCat();

	std::cout << w_meta->getType() << std::endl;
	std::cout << w_meta->makeSound() << std::endl;
	std::cout << w_cat->getType() << std::endl;
	std::cout << w_cat->makeSound() << std::endl;
	std::cout << cat_cat->getType() << std::endl;
	std::cout << cat_cat->makeSound() << std::endl;
	delete w_meta;
	delete w_cat;
	delete cat_cat;
	std::cout << "******************************" << std::endl;
	return (0);
}
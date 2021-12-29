#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Cat cat;
	Cat tmp = cat;

	std::cout << "Cat brain: " << cat.getBrain() << std::endl;
	std::cout << "TMP brain: " << tmp.getBrain() << std::endl;
	std::cout << "******************************" << std::endl;
	const Dog* dog = new Dog();
	const Dog* dog2 = new Dog(*dog);

	std::cout << "Dog brain addr: " << dog->getBrain() << std::endl;
	std::cout << "Dog2 brain addr: " << dog2->getBrain() << std::endl;
	std::cout << "******************************" << std::endl;
	delete dog;
	delete dog2;
	return (0);
}

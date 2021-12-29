#include "Zombie.hpp"

int main()
{
	Zombie	*arr_zombie = zombieHorde(3, "LANA");// выделение памяти и заполнение
	for (int i = 0; i < 3; ++i)
		arr_zombie[i].announce();//проверка что выделилось
	delete [] arr_zombie;
	return (0);
}
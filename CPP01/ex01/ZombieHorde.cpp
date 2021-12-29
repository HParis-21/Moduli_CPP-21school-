#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *arr_zomb = new Zombie[N];
	if (!arr_zomb)
	{
		std::cout << "memory allocation error" << std::endl;
		exit(1);
	}
	for (int i = 0; i < N; ++i)
		arr_zomb[i].setName(name);
	return (arr_zomb);
}
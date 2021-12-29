#include <iostream>
#include "iter.hpp"

template <typename T>
void	print(T one)
{
	std::cout << one << " ";
}

template <typename T>
void	inc(T &one)
{
	one ++;
}

int main()
{
	char	*str = strdup("abcdfeg");;
	int		arr[] = {0, 2, 1, 5, -6, 7, 10, 16, 98, 4, 42, 4, 5};
	float	arr2[] = {7.1, 3.2, 89.89, 42.21 , 3.0, 995.7, 6.77};


	std::cout << "=================================\n";
	iter(str, 7, &print);
	std::cout << "\n";
	iter(str, 7, &inc);
	iter(str, 7, &print);
	std::cout << "\n";
	std::cout << "=================================\n";

	iter(arr, 13, &print);
	std::cout << "\n";
	iter(arr, 13, &inc);
	iter(arr, 13, &print);
	std::cout << "\n";
	std::cout << "=================================\n";

	iter(arr2, 7, &print);
	std::cout << "\n";
	iter(arr2, 7, &inc);
	iter(arr2, 7, &print);
	std::cout << "\n";
	std::cout << "=================================\n";
}


//int main() {
//	int tab[] = { 0, 1, 2, 3, 4 };
//	Awesome tab2[5];
//	iter( tab, 5, print );
//	iter( tab2, 5, print );
//	return 0;
//}


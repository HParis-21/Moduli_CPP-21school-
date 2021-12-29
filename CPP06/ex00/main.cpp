#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Convert a(argv[1]);
		a.convert();
		return (0);
	}
	std::cout << "Incorrect number of arguments!!!" << std::endl;
	return (1);
}


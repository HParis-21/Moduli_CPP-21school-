#include <iostream>

int main(int argc, char **argv)
{
	int	i = 0;
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[++i])
		{
			j = -1;
			while (argv[i][++j])
				std::cout << (char)toupper((int)argv[i][j]);
		}
	}
	std::cout << std::endl;
	return 0;
}
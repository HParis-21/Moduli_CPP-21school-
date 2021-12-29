#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen myKaren;

	if (argc != 1)
		myKaren.complain(argv[1]);
	return (0);
}
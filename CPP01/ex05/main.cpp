#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen myKaren;

	if (argc == 2)
		myKaren.complain(argv[1]);
	else
	{
		myKaren.complain("DEBUG");
		myKaren.complain("INFO");
		myKaren.complain("WARNING");
		myKaren.complain("ERROR");
		myKaren.complain("fff");
	}
	return (0);
}
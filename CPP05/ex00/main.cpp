#include "Bureaucrat.hpp"

int main() {
	Bureaucrat Fillipo("Fillipo", 100);
	std::cout << Fillipo << std::endl;
	Fillipo.inGrade();
	std::cout << Fillipo << std::endl;
	Fillipo.deGrade();
	std::cout << Fillipo << std::endl;

	try
	{
		Bureaucrat Rob("Rob", 0);
		std::cout << Rob << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Rob("Rob", 1000);
		std::cout << Rob << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Rob("Rob", 1);
		std::cout << Rob << std::endl;
		Rob.inGrade();
		std::cout << Rob << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Rob("Rob", 13);
		std::cout << Rob << std::endl;
		Rob.deGrade();
		std::cout << Rob << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

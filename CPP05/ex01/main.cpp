#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	Form form("Forma75", 75, 75);

	try
	{
		Form b("f1", 0, 15);
		Form c(b);
		std::cout << b << std::endl;
		std::cout << c << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Rob("Rob", 0);
		std::cout << Rob << std::endl;
		Rob.signForm(form);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Rob("Rob", 1);
		std::cout << Rob << std::endl;
		Rob.signForm(form);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Rob("Rob", 103);
		std::cout << Rob << std::endl;
		Rob.deGrade();
		Rob.signForm(form);

	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

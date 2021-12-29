#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
	Bureaucrat supervisor("Supervisor", 5);
	Bureaucrat francis("Francis", 25);
	std::cout << std::endl;
	Intern a;

	try
	{
		Form * rrf = a.makeForm("fgd", "Bender");
		std:: cout << *rrf << std::endl;
		supervisor.signForm(*rrf);
		rrf->execute(supervisor);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}

//"shrubbery form";
//"robotomy form";
//"presidential form";
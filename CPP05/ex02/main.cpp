#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

	try
	{
		Bureaucrat supervisor("Supervisor", 5);
		Bureaucrat francis("Francis", 25);
		std::cout << std::endl;

		Form *pres = new PresidentialPardonForm("Heimerdinger");
		supervisor.executeForm(*pres);
		supervisor.signForm(*pres);
		supervisor.executeForm(*pres);

		std::cout << std::endl;
		Form *hex = new RobotomyRequestForm("Hexbot");
		supervisor.signForm(*hex);
		std::cout << *hex << std::endl;
		supervisor.executeForm(*hex);
		std::cout << std::endl;

		 Form *tree = new ShrubberyCreationForm("Hex Tree");
		 supervisor.signForm(*tree);
		 std::cout << *tree << std::endl;
		 supervisor.executeForm(*tree);
		 tree->execute(supervisor);
		 std::cout << std::endl;

		 Form *presi = new PresidentialPardonForm("Hei");
		 francis.executeForm(*presi);
		 francis.signForm(*presi);
		 francis.executeForm(*presi);

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}

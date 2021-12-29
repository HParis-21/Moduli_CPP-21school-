#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	std::string 	arrForm[3];
	Form *(Intern::*func[3])(std::string target);

	Form * newShrubbery(std::string target);
	Form * newRobotomy(std::string target);
	Form * newPresidential(std::string target);

public:
	Intern();
	~Intern();

	Form * makeForm(std::string name, std::string target);
};

#endif //INTERN_HPP
